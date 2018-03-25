# $FreeBSD: head/textproc/pecl-xdiff2/Makefile 465055 2018-03-20 02:20:07Z dbaio $

PORTNAME=	xdiff
PORTVERSION=	2.0.1
CATEGORIES=	textproc pear

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	PECL extension to create/apply binary and text patches

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libxdiff.so:textproc/libxdiff

USES=		php:pecl
IGNORE_WITH_PHP=	56
CONFLICTS=	pecl-xdiff-1*

LDFLAGS+=	-L${LOCALBASE}/lib

PORTSCOUT=	limit:^2.*

.include <bsd.port.mk>
