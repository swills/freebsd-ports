# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/textproc/rubygem-loofah/Makefile 483728 2018-11-01 19:17:45Z sunpoet $

PORTNAME=	loofah
PORTVERSION=	2.2.3
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Library for manipulating HTML/XML documents and fragments

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE.txt

RUN_DEPENDS=	rubygem-crass>=1.0.2:www/rubygem-crass \
		rubygem-nokogiri>=1.5.9:textproc/rubygem-nokogiri

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
