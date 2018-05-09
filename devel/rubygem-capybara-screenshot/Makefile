# $FreeBSD: head/devel/rubygem-capybara-screenshot/Makefile 469318 2018-05-07 19:20:44Z sunpoet $

PORTNAME=	capybara-screenshot
PORTVERSION=	1.0.21
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
