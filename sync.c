#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#define SCRIPT_VERSION "Experimental [ Properties ]"

// Fungsi untuk menjalankan perintah shell (notifikasi)
void shell(const char *pesan) {
    char command[512];
    snprintf(command, sizeof(command),
             "cmd notification post -S bigtext -t '♨️ Neuron ' 'Tag' '%s' > /dev/null 2>&1",
             pesan);
    system(command);
}

// Fungsi untuk mengatur properti sistem
void prop() {
    printf("\n❆ Feature Optimization: \n\n");
    
    printf(" ➭ Menonaktifkan pembaruan otomatis pada Hardware Composer (HWC)\n");
    printf("    untuk mengurangi beban sistem.\n");
    
    printf(" ➭ Mengaktifkan deteksi konten otomatis dalam SurfaceFlinger\n");
    printf("    untuk meningkatkan efisiensi rendering.\n");
    
    printf(" ➭ Memastikan VSync tetap aktif untuk mencegah screen tearing\n");
    printf("    dan meningkatkan stabilitas animasi.\n");
    
    printf(" ➭ Mengatur FPS divisor ke 1 agar sistem berjalan pada performa maksimal\n");
    printf("    tanpa batasan frame rate.\n");
    
    printf(" ➭ Mencegah sistem melakukan full composition update pada setiap VSync\n");
    printf("    untuk mengurangi latensi rendering.\n");
    
    printf(" ➭ Memastikan EGL menggunakan akselerasi perangkat keras\n");
    printf("    untuk meningkatkan performa grafis.\n");
    
    printf(" ➭ Menonaktifkan sinkronisasi antara GPU rendering dan komposisi layar\n");
    printf("    untuk mengurangi input lag.\n");
    
    printf(" ➭ Mematikan cache HWUI untuk mencegah penggunaan buffer lama\n");
    printf("    yang dapat menghambat performa.\n");
    
    printf(" ➭ Menonaktifkan sinkronisasi VSync untuk rendering berbasis CPU\n");
    printf("    agar lebih responsif.\n");
    
    printf(" ➭ Menghapus semua aktivitas yang berjalan di latar belakang\n");
    printf("    untuk membebaskan memori.\n");
    
    printf(" ➭ Melakukan sinkronisasi data untuk memastikan sistem tetap stabil\n");
    printf("    setelah perubahan properti.\n\n");
     
    sleep(3);
    printf("▶ Memproses pengaturan sistem...\n");

    const char *commands =
        "setprop debug.hwc.winupdate 0 && "
        "setprop debug.sf.use_content_detection_v2 true && "
        "setprop debug.hwui.disable_vsync 0 && "
        "setprop debug.hwui.fps_divisor 1 && "
        "setprop debug.sf.hwc_full_composition_vsync_override 0 && "
        "setprop debug.egl.hw 1 && "
        "setprop debug.hwui.disable_sync_to_composition true && "
        "setprop debug.hwui.disable_cache true && "
        "setprop debug.cpurend.vsync false  && "
        "cmd activity kill-all > /dev/null 2>&1 && "
        "sync > /dev/null 2>&1";

    int result = system(commands);

    if (result == 0) {
        printf(" Semua optimasi telah berhasil diterapkan!\n");
    } else {
        printf(" Gagal menerapkan optimasi. Error code: %d\n", result);
    }
    shell("Successfuly applay sacrificing");
}

// Fungsi untuk menjelaskan manfaat dari setiap setprop
void Indo_feture() {
    printf("\n========================= [ Penjelasan Properti Sistem ] =========================\n\n");

    printf("1. debug.hwc.winupdate 0\n");
    printf("   - Menonaktifkan mekanisme pembaruan otomatis pada Hardware Composer (HWC).\n");
    printf("   - HWC bertanggung jawab atas komposisi frame buffer sebelum ditampilkan ke layar.\n");
    printf("   - Dengan menonaktifkan pembaruan otomatis, sistem dapat mengurangi beban komposisi\n");
    printf("     yang tidak perlu, meningkatkan stabilitas, dan mengurangi potensi tearing.\n\n");

    printf("2. debug.sf.use_content_detection_v2 true\n");
    printf("   - Mengaktifkan deteksi konten otomatis generasi kedua dalam SurfaceFlinger.\n");
    printf("   - SurfaceFlinger adalah komponen utama Android yang menangani rendering ke layar.\n");
    printf("   - Deteksi konten ini membantu memilih metode komposisi yang lebih optimal\n");
    printf("     berdasarkan karakteristik frame yang sedang diproses.\n\n");

    printf("3. debug.hwui.disable_vsync 0\n");
    printf("   - Memastikan Vertical Synchronization (VSync) tetap aktif.\n");
    printf("   - VSync mencegah screen tearing dengan menyelaraskan refresh rate layar dengan\n");
    printf("     rendering frame, sehingga menghasilkan pengalaman visual yang lebih halus.\n\n");

    printf("4. debug.hwui.fps_divisor 1\n");
    printf("   - Mengatur FPS divisor menjadi 1, yang berarti sistem akan beroperasi pada kecepatan penuh.\n");
    printf("   - Berguna untuk perangkat dengan refresh rate tinggi agar animasi lebih responsif.\n\n");

    printf("5. debug.sf.hwc_full_composition_vsync_override 0\n");
    printf("   - Mencegah sistem melakukan komposisi ulang penuh setiap kali VSync terjadi.\n");
    printf("   - Hal ini dapat mengurangi latensi rendering dan meningkatkan efisiensi GPU.\n\n");

    printf("6. debug.egl.hw 1\n");
    printf("   - Memastikan semua operasi EGL menggunakan akselerasi perangkat keras (hardware acceleration).\n");
    printf("   - EGL (Embedded-System Graphics Library) adalah API yang menangani komunikasi antara\n");
    printf("     OpenGL ES dan sistem windowing.\n\n");

    printf("7. debug.hwui.disable_sync_to_composition true\n");
    printf("   - Menonaktifkan sinkronisasi antara GPU rendering dan komposisi layar.\n");
    printf("   - Mengurangi latensi input dalam aplikasi yang memerlukan respon cepat, seperti gaming.\n\n");

    printf("8. debug.hwui.disable_cache true\n");
    printf("   - Mematikan caching pada Hardware UI (HWUI).\n");
    printf("   - Membantu menghindari penggunaan ulang buffer yang lama, cocok untuk debugging atau\n");
    printf("     perangkat dengan manajemen memori GPU agresif.\n\n");

    printf("9. debug.cpurend.vsync false\n");
    printf("   - Menonaktifkan sinkronisasi VSync untuk rendering berbasis CPU.\n");
    printf("   - Cocok untuk meningkatkan responsivitas dalam skenario di mana rendering CPU lebih\n");
    printf("     diprioritaskan daripada kualitas grafis.\n\n");

    printf("====================================================================================\n\n");
    exit(1);
}

void Enggris_feature() {
    printf("\n========================= [ System Properties Explanation ] =========================\n\n");

    printf("1. debug.hwc.winupdate 0\n");
    printf("   - Disables automatic updates on the Hardware Composer (HWC).\n");
    printf("   - HWC is responsible for frame buffer composition before displaying content on the screen.\n");
    printf("   - By disabling automatic updates, the system reduces unnecessary composition load,\n");
    printf("     improving stability and minimizing potential screen tearing.\n\n");

    printf("2. debug.sf.use_content_detection_v2 true\n");
    printf("   - Enables second-generation automatic content detection within SurfaceFlinger.\n");
    printf("   - SurfaceFlinger is the main Android component responsible for rendering to the display.\n");
    printf("   - This feature allows the system to choose the most efficient composition method\n");
    printf("     based on frame characteristics.\n\n");

    printf("3. debug.hwui.disable_vsync 0\n");
    printf("   - Ensures that Vertical Synchronization (VSync) remains active.\n");
    printf("   - VSync prevents screen tearing by synchronizing the display's refresh rate\n");
    printf("     with the frame rendering process, providing a smoother visual experience.\n\n");

    printf("4. debug.hwui.fps_divisor 1\n");
    printf("   - Sets the FPS divisor to 1, meaning the system will run at full speed.\n");
    printf("   - This is useful for high-refresh-rate devices to maintain optimal animation performance.\n\n");

    printf("5. debug.sf.hwc_full_composition_vsync_override 0\n");
    printf("   - Prevents the system from performing a full composition update on every VSync cycle.\n");
    printf("   - Reduces rendering latency and improves GPU efficiency.\n\n");

    printf("6. debug.egl.hw 1\n");
    printf("   - Ensures that all EGL operations use hardware acceleration.\n");
    printf("   - EGL (Embedded-System Graphics Library) is an API that handles the communication\n");
    printf("     between OpenGL ES and the windowing system.\n\n");

    printf("7. debug.hwui.disable_sync_to_composition true\n");
    printf("   - Disables synchronization between GPU rendering and display composition.\n");
    printf("   - Reduces input latency in applications requiring quick response times, such as gaming.\n\n");

    printf("8. debug.hwui.disable_cache true\n");
    printf("   - Disables Hardware UI (HWUI) caching.\n");
    printf("   - Helps prevent the reuse of old frame buffers, useful for debugging or for\n");
    printf("     devices with aggressive GPU memory management.\n\n");

    printf("9. debug.cpurend.vsync false\n");
    printf("   - Disables VSync synchronization for CPU-based rendering.\n");
    printf("   - Useful for increasing responsiveness in scenarios where CPU rendering\n");
    printf("     is prioritized over graphical quality.\n\n");

    printf("====================================================================================\n\n");
   exit(1);
}

void Usage() {
    printf("\nNeourn %s - Lightweight System Utility\n\n", SCRIPT_VERSION);
    printf("SYNOPSIS:\n");
    printf("  neourn [OPTIONS]\n\n");
    printf("DESCRIPTION:\n");
    printf("  Neourn is a lightweight system utility for applying system properties and\n");
    printf("  explaining feature optimizations in detail.\n\n");
    printf("OPTIONS:\n");
    printf("  -E    Apply system properties and optimizations\n");
    printf("  -l    Show feature explanation (Indonesian)\n");
    printf("  -F    Show feature explanation (English)\n");
    printf("  -h    Show this help message and exit\n\n");
    printf("EXAMPLES:\n");
    printf("  Apply system optimizations:\n");
    printf("      neourn -E\n\n");
    printf("  Show feature explanation in Indonesian:\n");
    printf("      neourn -l\n\n");
    printf("  Show feature explanation in English:\n");
    printf("      neourn -F\n\n");
    printf("SEE ALSO:\n");
    printf("  Android Debug Bridge (ADB) - https://developer.android.com/studio/command-line/adb\n");
    printf("  SurfaceFlinger Documentation - https://source.android.com/docs/core/graphics\n");
    printf("  EGL and OpenGL ES - https://www.khronos.org/egl\n");
    printf("  Neourn Official Documentation - https://neourn.docs\n\n");
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        Usage();
    }

    for (int c = 1; c < argc; c++) {
        if (strcmp(argv[c], "-E") == 0) {  
            sleep(1);
            prop();  
        } else if (strcmp(argv[c], "-l") == 0) { 
            sleep(1);
            Indo_feture();  
        } else if (strcmp(argv[c], "-F") == 0) { 
            sleep(1);
            Enggris_feature();
        } else if (strcmp(argv[c], "-h") == 0) {
            sleep(1);
            Usage();
        } else {  
            printf("Unknown option: %s\n", argv[c]);  
            Usage();  
        }  
    }

    // Menampilkan informasi hak cipta
    sleep(1);

    printf("\n");
    printf("\n");
    printf(" ⚠️ Module ini dilindungi oleh hak cipta dan hanya\n");
    printf(" dapat digunakan oleh pengguna biasa. Penggunaan ini\n");
    printf(" tidak diperbolehkan untuk pengembang lain, termasuk\n");
    printf(" penggunaan kode, desain, atau fitur lain dalam module\n");
    printf(" tanpa izin tertulis dari pemilik hak cipta module.\n");
    printf("______________________________________________(+)\n\n");  
    
    return 0;
}