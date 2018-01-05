# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-liquid-tag-parser/Makefile 457976 2018-01-03 16:45:39Z sunpoet $

PORTNAME=	liquid-tag-parser
PORTVERSION=	1.8.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Parse liquid tags easily

LICENSE=	MIT

RUN_DEPENDS=	rubygem-extras>=0.3:devel/rubygem-extras \
		rubygem-liquid>=3.0:textproc/rubygem-liquid

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

# Disable rdoc
OPTIONS_EXCLUDE=DOCS

.include <bsd.port.mk>
