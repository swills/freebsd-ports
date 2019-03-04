# Created by: Douglas K. Rand (rand@meridian-enviro.com)
# $FreeBSD: head/math/p5-NetCDF/Makefile 494422 2019-03-02 17:45:58Z sunpoet $

PORTNAME=	NetCDF
PORTVERSION=	1.2.4
PORTREVISION=	6
CATEGORIES=	math perl5
MASTER_SITES=	ftp://ftp.unidata.ucar.edu/pub/netcdf-perl/
PKGNAMEPREFIX=	p5-
DISTNAME=	netcdf-perl-${PORTVERSION}

MAINTAINER=	rand@meridian-enviro.com
COMMENT=	Perl5 module to read and write netCDF files

LIB_DEPENDS=	libnetcdf.so:science/netcdf

USES=		perl5 fakeroot

WRKSRC_SUBDIR=		src
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	CPP_NETCDF=-I${LOCALBASE}/include LD_NETCDF=-lnetcdf \
		PERL_MANDIR=${STAGEDIR}${SITE_PERL}/man PERL=${PERL}

pre-install:
	@${PERL5} -pi -e 's/ doc_(perl|site|\$$\(INSTALLDIRS\))_install$$//' ${WRKSRC}/perl/Makefile

.include <bsd.port.mk>
