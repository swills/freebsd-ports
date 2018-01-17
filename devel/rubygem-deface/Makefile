# $FreeBSD: head/devel/rubygem-deface/Makefile 459068 2018-01-15 15:20:42Z swills $

PORTNAME=	deface
PORTVERSION=	1.3.0
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

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
