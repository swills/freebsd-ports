# Created by: Douglas K. Rand <rand@meridian-enviro.com>
# $FreeBSD: head/comms/libirman/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	libirman
PORTVERSION=	0.4.6
CATEGORIES=	comms
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION}

MAINTAINER=	rand@iteris.com
COMMENT=	Library for Evation's Irman infrared receiver

LICENSE=	LGPL20

USES=		gmake libtool pathfix
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

INSTALL_TARGET=	install-strip

PORTDOCS=	README TECHNICAL

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
