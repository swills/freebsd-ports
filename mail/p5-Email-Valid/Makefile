# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/mail/p5-Email-Valid/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Email-Valid
PORTVERSION=	1.200
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RJBS
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Check validity of Internet email addresses

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

COMMON_DEPENDS=	p5-Net-DNS>0:dns/p5-Net-DNS \
		p5-Mail-Tools>0:mail/p5-Mail-Tools \
		p5-Net-Domain-TLD>0:dns/p5-Net-Domain-TLD
BUILD_DEPENDS=	${COMMON_DEPENDS}
RUN_DEPENDS=	${COMMON_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
