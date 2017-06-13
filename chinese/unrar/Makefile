# Created by: Shen Chuan-Hsing <statue@freebsd.sinica.edu.tw>
# $FreeBSD: head/chinese/unrar/Makefile 441994 2017-05-29 15:26:27Z sunpoet $

CATEGORIES=	chinese

MAINTAINER=	sunpoet@FreeBSD.org

MASTERDIR=	${.CURDIR}/../../archivers/unrar

EXTRA_PATCHES=	${.CURDIR}/files/patch-arcread.cpp \
		${.CURDIR}/files/patch-unicode.cpp

CONFLICTS_INSTALL=	unrar unrar-iconv

.include "${MASTERDIR}/Makefile"
