# Created by: Shin-ya Murakami <murashin@gfd-dennou.org>
# $FreeBSD: head/science/rubygem-ruby-netcdf/Makefile 494422 2019-03-02 17:45:58Z sunpoet $

PORTNAME=	ruby-netcdf
PORTVERSION=	0.7.2
PORTREVISION=	2
CATEGORIES=	science rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby interface to the NetCDF scientific IO library

LIB_DEPENDS=	libnetcdf.so:science/netcdf
RUN_DEPENDS=	rubygem-narray>=0:math/rubygem-narray \
		rubygem-narray_miss>=0:math/rubygem-narray_miss

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
