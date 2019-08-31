# Created by: Ulf Lilleengen
# $FreeBSD$

PORTNAME=	bzr
PORTVERSION=	2.7.0
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	http://archive.ubuntu.com/ubuntu/pool/universe/b/bzr/
DISTFILES=	${PORTNAME}_${PORTVERSION}+bzr${UBUNTU_REV}.orig.tar.gz \
		${PORTNAME}_${PORTVERSION}+bzr${UBUNTU_REV}-${UBUNTU_VER}.debian.tar.xz

MAINTAINER=	fullermd@over-yonder.net
COMMENT=	Distributed version control system by Canonical

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING.txt

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}testtools>=0:devel/py-testtools@${PY_FLAVOR}
SFTP_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}paramiko>=0:security/py-paramiko@${PY_FLAVOR}
CA_BUNDLE_RUN_DEPENDS=	${LOCALBASE}/share/certs/ca-root-nss.crt:security/ca_root_nss

USES=		gettext python:2.7 shebangfix
USE_PYTHON=	distutils cython noegginfo

MAKE_ENV=	BZR_LOG=/dev/null
PYDISTUTILS_PKGNAME=	bzr
SHEBANG_FILES=	bzr
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}+bzr${UBUNTU_REV}
UBUNTU_REV=	6622
UBUNTU_VER=	15

OPTIONS_DEFINE=	SFTP CA_BUNDLE
SFTP_DESC=	Paramiko for SFTP support
CA_BUNDLE_DESC=	Include CA bundle for SSL cert validation
OPTIONS_DEFAULT=	SFTP CA_BUNDLE

post-install:
	${INSTALL_MAN} ${WRKSRC}/bzr.1 ${STAGEDIR}${MAN1PREFIX}/man/man1
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/bzrlib/*.so

do-test:
	cd ${WRKSRC} && ./bzr selftest

do-patch:
	for p in `cat ${WRKDIR}/debian/patches/series` ; do \
	   (cd ${WRKSRC} && ${PATCH} -p1 -s < ${WRKDIR}/debian/patches/$$p ) ; \
	done

.include <bsd.port.mk>
