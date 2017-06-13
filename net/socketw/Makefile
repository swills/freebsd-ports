# Created by: Thibault Payet <monwarez@mailoo.org>
# $FreeBSD: head/net/socketw/Makefile 431037 2017-01-09 22:02:43Z feld $

PORTNAME=	socketw
PORTVERSION=	1.0.0.20151501
CATEGORIES=	net

MAINTAINER=	monwarez@mailoo.org
COMMENT=	Cross platform C++ streaming socket library

LICENSE=	GPLv2+

USE_GITHUB=	yes
GH_ACCOUNT=	RigsOfRods
GH_TAGNAME=	6a05e12

USES=		cmake ssl:build
CFLAGS+=	-I${OPENSSLINC}

.include <bsd.port.mk>
