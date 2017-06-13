# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/textproc/pecl-yaml/Makefile 440442 2017-05-08 17:21:49Z dbaio $

PORTNAME=	yaml
PORTVERSION=	2.0.0
CATEGORIES=	textproc pear

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	YAML-1.1 parser and emitter

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libyaml.so:textproc/libyaml

USES=		php:pecl
IGNORE_WITH_PHP=	56

.include <bsd.port.mk>
