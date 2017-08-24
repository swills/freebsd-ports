# $FreeBSD: head/devel/rubygem-peek-sidekiq/Makefile 448655 2017-08-24 09:12:58Z tz $

PORTNAME=	peek-sidekiq
PORTVERSION=	1.0.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	tz@FreeBSD.org
COMMENT=	Provide a peek into the Sidekiq calls made

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-atomic>=1.0.0:devel/rubygem-atomic \
		rubygem-peek>=0:devel/rubygem-peek \
		rubygem-sidekiq>=0:devel/rubygem-sidekiq

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
