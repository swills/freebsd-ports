# Created by: Denis Pokataev <catone@cpan.org>
# $FreeBSD: head/www/p5-URI-Escape-XS/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	URI-Escape-XS
PORTVERSION=	0.14
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Drop-In replacement for URI::Escape in XS

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/URI/Escape/XS/XS.so

.include <bsd.port.mk>
