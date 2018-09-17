# $FreeBSD: head/devel/rubygem-deface/Makefile 479220 2018-09-08 00:15:03Z sunpoet $

PORTNAME=	deface
PORTVERSION=	1.3.1
CATEGORIES=	devel rubygems www
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Customize ERB, Haml and Slim views in a Rails application

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-nokogiri>=1.6:textproc/rubygem-nokogiri \
		rubygem-polyglot>=0:devel/rubygem-polyglot \
		rubygem-rails4>=4.1:www/rubygem-rails4 \
		rubygem-rainbow>=2.1.0:devel/rubygem-rainbow

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
