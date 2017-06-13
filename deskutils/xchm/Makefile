# Created by: Pav Lucistnik <pav@oook.cz>
# $FreeBSD: head/deskutils/xchm/Makefile 421837 2016-09-11 16:42:03Z amdmi3 $

PORTNAME=	xchm
PORTVERSION=	1.23
PORTREVISION=	3
CATEGORIES=	deskutils
MASTER_SITES=	SF/${PORTNAME}/xCHM/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Windows HTML Help (.chm) viewer for UNIX

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libchm.so:misc/chmlib

GNU_CONFIGURE=	yes
USES=		localbase
USE_WX=		2.8
WX_CONF_ARGS=	absolute
LDFLAGS+=	-lpthread

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes
NLS_USES=	gettext
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
