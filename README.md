\documentclass{article}
\usepackage[utf8]{inputenc}
\usepackage{tcolorbox}
\usepackage{hyperref}
\usepackage{pgfplots}

% Document metadata for GitHub
\title{Research Paper Topics for Summer 2025}
\author{A. Student \and B. Colleague}
\date{\today}
\hypersetup{
    colorlinks=true,
    linkcolor=blue,
    filecolor=magenta,      
    urlcolor=cyan,
    pdftitle={Topics},
    pdfpagemode=FullScreen,
}

\begin{document}

\maketitle

\begin{tcolorbox}[title=Project Topics, colback=blue!5!white, colframe=blue!75!black, boxrule=1pt, sharp corners]

This document outlines the proposed topics for our research project. We can collaborate on this file directly on GitHub.

\section{Approved Topics}

These topics are currently being pursued.

\begin{itemize}
    \item \textbf{Topic A:} A comparative study of machine learning algorithms for sentiment analysis.
    \item \textbf{Topic B:} Implementing a blockchain-based secure voting system.
    \item \textbf{Topic C:} Numerical methods for solving partial differential equations.
    \item \textbf{Topic D:} An analysis of deep learning models for image recognition.
    \item \textbf{Topic E:} A study on the efficiency of various sorting algorithms.
    % To add a new topic, simply add a new \item below this line.
\end{itemize}

\section{Topics to be Added}

The following are new topics proposed for consideration. To add them to the approved list, simply move the \verb|\item| to the "Approved Topics" section.

\begin{itemize}
    \item \textbf{Topic F:} A survey of modern cryptography techniques.
    \item \textbf{Topic G:} An investigation into the environmental impact of large-scale data centers.
    \item \textbf{Topic H:} A comparative analysis of programming paradigms.
    % To add a new topic, uncomment the line below and replace the content.
    % \item \textbf{Topic I:} Placeholder for a new topic.
\end{itemize}

\section{Topics to be Deleted}

These topics have been removed from consideration. To delete a topic, simply remove its \verb|\item| entry.

\begin{itemize}
    \item \textbf{Topic X:} A review of traditional data structures in modern programming.
    \item \textbf{Topic Y:} An introduction to functional programming with Haskell.
    % To delete a topic, simply remove the \item.
\end{itemize}
\end{tcolorbox}

\newpage

\section{Example of a Graph}

This section demonstrates how to create a simple plot using the \texttt{pgfplots} package. You can use this to visualize data for your reports or papers.

\begin{figure}[h]
    \centering
    \begin{tikzpicture}
    \begin{axis}[
        title={Function Plot: $y = x^2$},
        xlabel={x},
        ylabel={y},
        grid=major,
        xmin=-2, xmax=2,
        ymin=0, ymax=4,
    ]
    \addplot[domain=-2:2, samples=100, smooth, thick, blue] {x^2};
    \end{axis}
    \end{tikzpicture}
    \caption{A simple plot of the function $y=x^2$.}
    \label{fig:plot}
\end{figure}

\end{document}

