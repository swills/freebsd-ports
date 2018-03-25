# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/mail/p5-Email-Address-XS/Makefile 464691 2018-03-16 15:20:35Z sunpoet $

PORTNAME=	Email-Address-XS
PORTVERSION=	1.03
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Parse and format RFC 2822 email addresses and groups

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USE_PERL5=	configure
USES=		perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Email/Address/XS/XS.so

.include <bsd.port.mk>
