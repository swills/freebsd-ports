# Created by: MANTANI Nobutaka <nobutaka@nobutaka.com>
# $FreeBSD: head/japanese/w3m-img/Makefile 473199 2018-06-24 13:41:06Z nobutaka $

CATEGORIES=	japanese
PKGNAMESUFFIX=	-img

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	Pager/text-based WWW browser with Japanese and inline image support

MASTERDIR=	${.CURDIR}/../../www/w3m
PKGDIR=		${.CURDIR}
PLIST=		${MASTERDIR}/pkg-plist

OPTIONS_SLAVE=	DOCS JAPANESE INLINE_IMAGE
NO_DIALOG=	yes
CONFLICTS=	ja-w3m-0.5.* w3m-0.5.* w3m-img-0.5.*

.include "${MASTERDIR}/Makefile"
