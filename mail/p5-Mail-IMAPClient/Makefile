# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD$

PORTNAME=	Mail-IMAPClient
PORTVERSION=	3.39
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PLOBBES
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Perl5 module to talk to a IMAP4rev1 (RFC2060) server

LICENSE=	ARTPERL10

RUN_DEPENDS=	p5-Parse-RecDescent>=1.94:devel/p5-Parse-RecDescent \
		p5-IO-Socket-SSL>=0:security/p5-IO-Socket-SSL

OPTIONS_DEFINE=	CRAMMD5 DIGESTMD5 NTLM

OPTIONS_DEFAULT=

CRAMMD5_DEFINE=	Allow CRAM-MD5 auth scheme.
CRAMMD5_RUN_DEPENDS=	p5-Digest-HMAC>=0:security/p5-Digest-HMAC
CRAMMD5_RUN_DEPENDS_OFF=

DIGESTMD5_DEFINE=	Allow DIGEST-MD5 auth scheme.
DIGESTMD5_RUN_DEPENDS=	p5-Authen-SASL>=0:security/p5-Authen-SASL \
			p5-Digest-MD5>=0:security/p5-Digest-MD5
DIGESTMD5_RUN_DEPENDS_OFF=

NTLM_DEFINE=	Allow NTLM auth scheme.
NTLM_RUN_DEPENDS=	p5-Authen-NTLM>=0:security/p5-Authen-NTLM
NTLM_RUN_DEPENDS_OFF=

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	</dev/null

.include <bsd.port.mk>
