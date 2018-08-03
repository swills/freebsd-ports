# Created by: jmz
# $FreeBSD: head/lang/p5-ExtUtils-F77/Makefile 475857 2018-07-29 22:18:44Z gerald $

PORTNAME=	ExtUtils-F77
PORTVERSION=	1.20
PORTREVISION=	6
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Helps link C programs with Fortran subroutines

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

NO_ARCH=	yes
USES=		fortran perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e "s|'gfortran48'|'${FC}'|; s|'-O2'|'${CFLAGS}'|" ${WRKSRC}/F77.pm

.include <bsd.port.mk>
