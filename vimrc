" Fichero .vimrc de mi usuario
" Los comentarios en este fichero se ponen con comillas dobles

" Esta opción debe estar la primera porque cambia otras opciones
" nocompatible permite funciones que VI no soporta
set nocompatible

set number

" Muestra la posición del cursor en todo momento
set ruler

" Al presionar tab, inserta 2 espacios (Guía de estilo de Google)
set expandtab

" Muestra los tabs existente con 2 espacios
set tabstop=2

" Acceso al portatapeles del sistema
set clipboard=unnamed

" shiftwidth (el número de espacios a usar cuando se indenta)
set sw=2

syntax on

" Volver a la última posición al abrir un fichero
" https://stackoverflow.com/questions/7894330/preserve-last-editing-position-in-vim
autocmd BufReadPost *
     \ if line("'\"") > 0 && line("'\"") <= line("$") |
     \   exe "normal! g`\"" |
     \ endif

set textwidth=80

autocmd BufNewFile *.c r ~/.pruebas.cc
autocmd BufNewFile *.cc r ~/.fixedheader.cc
autocmd BufNewFile *.h r ~/.headerfile.h