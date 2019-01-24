# Created by: Danilo Egea Gondolfo <danilo@FreeBSD.org>
# $FreeBSD: head/devel/aws-c-event-stream/Makefile 490071 2019-01-12 18:36:39Z danilo $

PORTNAME=	aws-c-event-stream
PORTVERSION=	0.1.1
DISTVERSIONPREFIX=	v
PORTEPOCH=	1
CATEGORIES=	devel

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	C99 implementation of the vnd.amazon.eventstream content-type

LICENSE=	APACHE20

LIB_DEPENDS=	libaws-c-common.so:devel/aws-c-commons \
		libaws-checksums.so:devel/aws-checksums

USES=		cmake compiler:c11

USE_GITHUB=	yes
GH_ACCOUNT=	awslabs

CMAKE_ARGS+=	-DBUILD_SHARED_LIBS=ON
LDFLAGS+=	-lexecinfo -lpthread

USE_LDCONFIG=	yes

.include <bsd.port.mk>
