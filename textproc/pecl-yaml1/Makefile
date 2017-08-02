# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/textproc/pecl-yaml1/Makefile 446911 2017-07-30 12:52:38Z dbaio $

PORTNAME=	yaml
PORTVERSION=	1.3.1
CATEGORIES=	textproc pear
PKGNAMESUFFIX=	1

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	YAML-1.1 parser and emitter

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libyaml.so:textproc/libyaml

PORTSCOUT=	limit:^1.*

USES=		php:pecl
IGNORE_WITH_PHP=	70 71

.include <bsd.port.mk>
