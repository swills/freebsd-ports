# $FreeBSD: head/mail/rubygem-roadie-rails/Makefile 466673 2018-04-06 16:28:00Z sunpoet $

PORTNAME=	roadie-rails
PORTVERSION=	1.3.0
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
