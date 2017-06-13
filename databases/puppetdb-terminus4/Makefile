# $FreeBSD: head/databases/puppetdb-terminus4/Makefile 439967 2017-05-02 19:02:16Z miwi $

PORTNAME=	puppetdb-terminus
PORTVERSION=	4.4.0
CATEGORIES=	databases ruby
MASTER_SITES=	http://downloads.puppetlabs.com/puppetdb/
PKGNAMESUFFIX=	4
DISTNAME=	puppetdb-${PORTVERSION}

MAINTAINER=	tj@FreeBSD.org
COMMENT=	PuppetDB storeconfigs backend terminus module

LICENSE=	APACHE20

BUILD_DEPENDS=	puppet4>=0:sysutils/puppet4

CONFLICTS_INSTALL=	puppetdb-terminus-* puppetdb-terminus3-*
USE_RUBY=	yes
NO_BUILD=	yes
USES=		gmake

post-patch:
	@${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|" ${WRKSRC}/Makefile

do-install:
	@cd ${WRKSRC} && ${SETENV} DESTDIR=${STAGEDIR} ${GMAKE} install-puppetdb-termini

.include <bsd.port.mk>
