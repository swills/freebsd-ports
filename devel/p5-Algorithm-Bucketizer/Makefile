# Created by: Christopher Boumenot <boumenot@gmail.com>
# $FreeBSD: head/devel/p5-Algorithm-Bucketizer/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Algorithm-Bucketizer
PORTVERSION=	0.13
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Distribute sized items to buckets with limited size

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Algorithm-Permute>=0:devel/p5-Algorithm-Permute \
		p5-Sysadm-Install>=0.23:sysutils/p5-Sysadm-Install
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
