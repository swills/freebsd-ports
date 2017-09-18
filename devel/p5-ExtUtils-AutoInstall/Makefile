# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/devel/p5-ExtUtils-AutoInstall/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	ExtUtils-AutoInstall
PORTVERSION=	0.64
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Automatic install of dependencies via CPAN

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e '/^features/,/^);/d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
