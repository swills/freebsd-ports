# Created by: jmz
# $FreeBSD: head/lang/p5-ExtUtils-F77/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	ExtUtils-F77
PORTVERSION=	1.20
PORTREVISION=	2
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Helps link C programs with Fortran subroutines

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

NO_ARCH=	yes
USES=		fortran perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e "s|'gfortran44'|'${FC}'|" \
			  -e "s|'-O2'|'${CFLAGS}'|" \
			  ${WRKSRC}/F77.pm

.include <bsd.port.mk>
