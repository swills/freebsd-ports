# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: head/www/rubygem-thin/Makefile 443518 2017-06-13 16:54:49Z sunpoet $

PORTNAME=	thin
PORTVERSION=	1.7.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Fast and simple Ruby web server

LICENSE=	BSD2CLAUSE RUBY
LICENSE_COMB=	dual

RUN_DEPENDS=	rubygem-daemons>=1.0.9:devel/rubygem-daemons \
		rubygem-eventmachine>=1.0.4:devel/rubygem-eventmachine \
		rubygem-rack16>=1.6:www/rubygem-rack16

USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/thin

.include <bsd.port.mk>
