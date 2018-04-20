# $FreeBSD: head/devel/rubygem-capybara-screenshot/Makefile 467354 2018-04-14 23:59:06Z sunpoet $

PORTNAME=	capybara-screenshot
PORTVERSION=	1.0.19
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Automatically create snapshots with Capybara

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-capybara>=1.0:devel/rubygem-capybara \
		rubygem-launchy>=0:devel/rubygem-launchy

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
