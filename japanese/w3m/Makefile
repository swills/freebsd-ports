# Created by: SADA Kenji <sada@FreeBSD.org>
# $FreeBSD: head/japanese/w3m/Makefile 473199 2018-06-24 13:41:06Z nobutaka $

CATEGORIES=	japanese

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	Pager/text-based WWW browser with Japanese support

MASTERDIR=	${.CURDIR}/../../www/w3m
PKGDIR=		${.CURDIR}
PLIST=		${MASTERDIR}/pkg-plist

OPTIONS_SLAVE=	DOCS JAPANESE
NO_DIALOG=	yes
CONFLICTS=	ja-w3m-img-0.5.* w3m-0.5.* w3m-img-0.5.*

.include "${MASTERDIR}/Makefile"
