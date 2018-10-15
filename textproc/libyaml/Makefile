# Created by: ijliao
# $FreeBSD: head/textproc/libyaml/Makefile 481510 2018-10-08 03:05:59Z jpaetzel $

PORTNAME=	libyaml
PORTVERSION=	0.2.1
CATEGORIES=	textproc
MASTER_SITES=	http://pyyaml.org/download/libyaml/
DISTNAME=	yaml-${PORTVERSION}
DIST_SUBDIR=	repacked

MAINTAINER=	jpaetzel@FreeBSD.org
COMMENT=	YAML 1.1 parser and emitter written in C

LICENSE=	MIT

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		cpe libtool pathfix
CPE_VENDOR=	pyyaml
USE_LDCONFIG=	yes

.include <bsd.port.mk>
