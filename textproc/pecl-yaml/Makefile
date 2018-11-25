# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/textproc/pecl-yaml/Makefile 485762 2018-11-24 11:52:22Z dbaio $

PORTNAME=	yaml
PORTVERSION=	2.0.4
CATEGORIES=	textproc pear

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	YAML-1.1 parser and emitter

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libyaml.so:textproc/libyaml

USES=		php:pecl
IGNORE_WITH_PHP=	56

.include <bsd.port.mk>
