# $FreeBSD: head/devel/p5-Clone/Makefile 483199 2018-10-27 23:23:57Z sunpoet $

PORTNAME=	Clone
PORTVERSION=	0.41
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Clone - recursively copy Perl datatypes

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/OPTIMIZE/d' ${WRKSRC}/Makefile.PL

post-install:
	@${STRIP_CMD} ${STAGEDIR}/${PREFIX}/${SITE_ARCH_REL}/auto/Clone/Clone.so

.include <bsd.port.mk>
