# Created by: Marc Fonvieille <blackend@FreeBSD.org>
# $FreeBSD: head/misc/freebsd-doc-ja/Makefile 459649 2018-01-22 13:07:46Z blackend $

CATEGORIES=	misc docs
PKGNAMEPREFIX=	ja-

MAINTAINER=	doceng@FreeBSD.org
COMMENT=	Japanese translation of the FreeBSD Documentation Project

MASTERDIR=	${.CURDIR}/../freebsd-doc-en
PLIST=		${.CURDIR}/pkg-plist

DOCLANG=	ja_JP.eucJP

.include "${MASTERDIR}/Makefile"

.if ${PORT_OPTIONS:MPDF} || ${PORT_OPTIONS:MPS}
BUILD_DEPENDS+=	${LOCALBASE}/share/fonts/OTF/ipam.otf:japanese/font-ipa
.endif
