# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: head/devel/p5-Module-CoreList/Makefile 452605 2017-10-21 20:18:34Z sunpoet $

PORTNAME=	Module-CoreList
PORTVERSION=	5.20171020
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	See what modules shipped with versions of Perl

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/EXE_FILES/d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
