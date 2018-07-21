# Created by: will
# $FreeBSD: head/sysutils/p5-Quota/Makefile 474839 2018-07-18 07:38:44Z mat $

PORTNAME=	Quota
PORTVERSION=	1.7.2
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module that provides access to filesystem quotas

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD && ${OSVERSION} >= 1200072
BROKEN=		Fails to build.
.endif

.include <bsd.port.post.mk>
