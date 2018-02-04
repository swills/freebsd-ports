# $FreeBSD: head/devel/rubygem-jenkins_api_client/Makefile 460494 2018-01-31 16:01:01Z sunpoet $

PORTNAME=	jenkins_api_client
PORTVERSION=	1.5.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Jenkins JSON API Client

LICENSE=	MIT

RUN_DEPENDS=	rubygem-json>=1.0:devel/rubygem-json \
		rubygem-mixlib-shellout>=1.1.0:devel/rubygem-mixlib-shellout \
		rubygem-nokogiri>=1.6:textproc/rubygem-nokogiri \
		rubygem-socksify>=1.7.0:www/rubygem-socksify \
		rubygem-terminal-table>=1.4.0:textproc/rubygem-terminal-table \
		rubygem-thor>=0.16.0:devel/rubygem-thor

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem
PLIST_FILES=	bin/jenkinscli

.include <bsd.port.mk>
