# Created by: Roderick van Domburg <r.s.a.vandomburg@student.utwente.nl>
# $FreeBSD: head/security/rubygem-net-ssh/Makefile 449422 2017-09-07 20:12:56Z sunpoet $

PORTNAME=	net-ssh
PORTVERSION=	4.2.0
PORTREVISION=	1
PORTEPOCH=	2
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Non-interactive SSH processing

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	rubygem-bcrypt_pbkdf>=1.0:security/rubygem-bcrypt_pbkdf \
		rubygem-bundler>=1.11:sysutils/rubygem-bundler \
		rubygem-minitest>=5.1:devel/rubygem-minitest \
		rubygem-mocha>=1.2.1:devel/rubygem-mocha \
		rubygem-rake>=12.0:devel/rubygem-rake \
		rubygem-rbnacl>=3.3:security/rubygem-rbnacl \
		rubygem-rbnacl-libsodium>=1.0.11:security/rubygem-rbnacl-libsodium \
		rubygem-rubocop>=0.47.0:devel/rubygem-rubocop

OPTIONS_DEFINE=	PROMPT_PASSPHRASES
OPTIONS_DEFAULT=PROMPT_PASSPHRASES
PROMPT_PASSPHRASES_DESC=	Prompt for passphrases on keys

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	support/ssh_tunnel_bug.rb

PROMPT_PASSPHRASES_RUN_DEPENDS=	rubygem-ruby-termios>=0:comms/rubygem-ruby-termios

.include <bsd.port.mk>
