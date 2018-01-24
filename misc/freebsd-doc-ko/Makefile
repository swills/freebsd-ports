# Created by: Marc Fonvieille <blackend@FreeBSD.org>
# $FreeBSD: head/misc/freebsd-doc-ko/Makefile 459649 2018-01-22 13:07:46Z blackend $

CATEGORIES=	misc docs
PKGNAMEPREFIX=	ko-

MAINTAINER=	doceng@FreeBSD.org
COMMENT=	Korean translation of the FreeBSD Documentation Project

MASTERDIR=	${.CURDIR}/../freebsd-doc-en
PLIST=		${.CURDIR}/pkg-plist

DOCLANG=	ko_KR.UTF-8

.include "${MASTERDIR}/Makefile"

.if ${PORT_OPTIONS:MPDF} || ${PORT_OPTIONS:MPS}
BUILD_DEPENDS+=	${LOCALBASE}/share/fonts/nanum-ttf/NanumBarunGothic.ttf:korean/nanumfonts-ttf
.endif
