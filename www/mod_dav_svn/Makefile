# Created by: lev@FreeBSD.org
# $FreeBSD: head/www/mod_dav_svn/Makefile 465240 2018-03-21 21:24:43Z brnrd $

PORTNAME=	mod_dav_svn
DISTNAME=	subversion-${PORTVERSION}
PORTREVISION=	2

CATEGORIES=	www

MAINTAINER=	lev@FreeBSD.org
COMMENT=	Apache module for subversion serving

.if defined(WITH_SUBVERSION_VER) && ${WITH_SUBVERSION_VER} == 18
MASTERDIR=	${.CURDIR}/../../devel/subversion18
.else
MASTERDIR=	${.CURDIR}/../../devel/subversion
.endif
PKGDIR=		${.CURDIR}

SVN_BUILD_ADDONS=	yes

USES=		apache:2.2+

.include "${MASTERDIR}/Makefile.common"

CONFIGURE_ARGS+=	--with-apxs=${APXS} \
			--with-apache-libexecdir \
			--without-gnome-keyring \
			--without-kwallet
SUB_FILES+=	220_subversion.conf.sample

PLIST_SUB+=	SED=${SED}

ALL_TARGET=	apache-mod
INSTALL_TARGET=	install-mods-shared

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${APACHEETCDIR}/modules.d
	${INSTALL_DATA} ${WRKDIR}/220_subversion.conf.sample \
		${STAGEDIR}${PREFIX}/${APACHEETCDIR}/modules.d

.include <bsd.port.post.mk>
