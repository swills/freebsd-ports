# Created by: Marc Fonvieille <blackend@FreeBSD.org>
# $FreeBSD: head/misc/freebsd-doc-zh_cn/Makefile 459649 2018-01-22 13:07:46Z blackend $

CATEGORIES=	misc docs
PKGNAMEPREFIX=	zh_cn-

MAINTAINER=	doceng@FreeBSD.org
COMMENT=	Simplified Chinese translation of the FreeBSD Documentation Project

MASTERDIR=	${.CURDIR}/../freebsd-doc-en
PLIST=		${.CURDIR}/pkg-plist

DOCLANG=	zh_CN.UTF-8
DOCLANG_PREFIX=	zh_CN

.include "${MASTERDIR}/Makefile"

.if ${PORT_OPTIONS:MPDF} || ${PORT_OPTIONS:MPS}
BUILD_DEPENDS+=	${LOCALBASE}/share/fonts/TrueType/gkai00mp.ttf:chinese/arphicttf
.endif
