# $FreeBSD: head/devel/rubygem-capybara-screenshot/Makefile 482775 2018-10-22 19:10:05Z sunpoet $

PORTNAME=	capybara-screenshot
PORTVERSION=	1.0.22
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Automatically create snapshots with Capybara

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-capybara>=1.0:devel/rubygem-capybara \
		rubygem-launchy>=0:devel/rubygem-launchy

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
