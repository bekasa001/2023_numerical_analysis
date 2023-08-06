set terminal pngcairo size 540, 360

set xlabel "x"
set ylabel "u"

set output "2.png"
set key box
set yrange [-0.02:0.16]
plot "2_5.txt" with linespoints pt 2 lw 2 title "Δt = 1/500", "2_6.txt" with linespoints lw 2 title "Δt = 1/600", "2_str.txt" with lines lc "black" title "高精度解"

set clip two
set output "4.png"
plot "4_5.txt" with linespoints pt 2 lw 2 title "Δt = 1/500", "4_6.txt" with linespoints lw 2 title "Δt = 1/600", "4_str.txt" with lines lc "black" title "高精度解"

set output "1.png"
set yrange [-0.000003:0.00003]
plot "1_5.txt" with linespoints pt 2 lw 2 title "Δt = 1/500", "1_6.txt" with linespoints lw 2 title "Δt = 1/600", "1_str.txt" with lines lc "black" title "高精度解"
