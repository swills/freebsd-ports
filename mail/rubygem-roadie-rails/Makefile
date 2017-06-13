# $FreeBSD: head/mail/rubygem-roadie-rails/Makefile 440735 2017-05-12 21:52:08Z sunpoet $

PORTNAME=	roadie-rails
PORTVERSION=	1.2.1
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Helper for generating HTML mails in Rails applications

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-railties4>=3.0:www/rubygem-railties4 \
		rubygem-roadie>=3.1:mail/rubygem-roadie

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

SHEBANG_FILES=	setup.sh

.include <bsd.port.mk>
