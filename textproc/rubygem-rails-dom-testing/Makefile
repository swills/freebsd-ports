# Created by: Johannes Jost Meixner <xmj@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-rails-dom-testing/Makefile 440664 2017-05-11 21:02:56Z sunpoet $

PORTNAME=	rails-dom-testing
PORTVERSION=	2.0.3
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Analyse and compare DOMs using Nokogiri

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport4>=4.2.0:devel/rubygem-activesupport4 \
		rubygem-nokogiri>=1.6:textproc/rubygem-nokogiri

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
