# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: head/www/rubygem-less/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	less
PORTVERSION=	1.2.21
#PORTREVISION=	0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	The LESS Ruby gem compiles LESS code to CSS

RUN_DEPENDS=	rubygem-treetop>=1.4.2:devel/rubygem-treetop \
		rubygem-mutter>=0.4.2:devel/rubygem-mutter

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/lessc

.include <bsd.port.mk>
