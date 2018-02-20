# Created by: Donald Burr <dburr@FreeBSD.org>
# $FreeBSD: head/devel/p5-PathTools/Makefile 462433 2018-02-20 20:26:31Z sunpoet $

PORTNAME=	PathTools
PORTVERSION=	3.7400
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:XSAWYERX
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C|00$||}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for portably manipulating file specifications

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Cwd/Cwd.so

.include <bsd.port.mk>
