# Created by: Larry Rosenman <ler@FreeBSD.org>
# $FreeBSD: head/textproc/pecl-xdiff/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	xdiff
PORTVERSION=	1.5.2
PORTREVISION=	1
CATEGORIES=	textproc pear

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	PECL extension to create/apply binary and text patches

LICENSE=	PHP301

LIB_DEPENDS=	libxdiff.so:textproc/libxdiff

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72 73

LDFLAGS+=	-L${LOCALBASE}/lib

PORTSCOUT=	limit:^1.*

.include <bsd.port.mk>
