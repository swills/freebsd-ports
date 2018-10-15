# Created by: Thibault Payet <monwarez@mailoo.org>
# $FreeBSD: head/net/socketw/Makefile 482108 2018-10-14 19:04:12Z swills $

PORTNAME=	socketw
PORTVERSION=	3.10.26.20180918
CATEGORIES=	net

MAINTAINER=	monwarez@mailoo.org
COMMENT=	Cross platform C++ streaming socket library

LICENSE=	GPLv2+

USES=		cmake ssl:build

USE_GITHUB=	yes
GH_ACCOUNT=	RigsOfRods
GH_TAGNAME=	f8db442

CFLAGS+=	-I${OPENSSLINC}

.include <bsd.port.mk>
