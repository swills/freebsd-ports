# Created by: MANTANI Nobutaka <nobutaka@nobutaka.com>
# $FreeBSD: head/www/w3m-img/Makefile 473199 2018-06-24 13:41:06Z nobutaka $

PKGNAMESUFFIX=	-img

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	Pager/text-based WWW browser with inline image support

MASTERDIR=	${.CURDIR}/../../www/w3m
PKGDIR=		${.CURDIR}
PLIST=		${MASTERDIR}/pkg-plist

OPTIONS_SLAVE=	DOCS INLINE_IMAGE
NO_DIALOG=	yes
CONFLICTS=	ja-w3m-0.5.* ja-w3m-img-0.5.* w3m-0.5.*0

.include "${MASTERDIR}/Makefile"
